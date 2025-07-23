//Problem Description := https://leetcode.com/problems/rectangle-area-ii
class Solution {
    public:
        struct Event {
            int x, y1, y2, type;
        };
        struct Interval {
            int start, end;
            bool operator<(const Interval& other) const {
                if (start != other.start) {
                    return start < other.start;
                }
                return end < other.end;
            }
        };
        int rectangleArea(vector<vector<int>>& rectangles) {
            vector<Event> events;
            for (const auto& rect : rectangles) {
                events.push_back({rect[0], rect[1], rect[3], 1});
                events.push_back({rect[2], rect[1], rect[3], -1});
            }
            sort(events.begin(), events.end(), [](const Event& a, const Event& b) {
                if (a.x != b.x) {
                    return a.x < b.x;
                }
                return a.type > b.type;
            });
            multiset<Interval> activeIntervals;
            long long totalArea = 0;
            long long PrevX = 0;
            const int MOD = 1e9 + 7;
            for (const auto& event : events) {
                if (!activeIntervals.empty()) {
                    long long coveredLength = 0;
                    long long currentEnd = -1;
                    for (const auto& interval : activeIntervals) {
                        if (interval.start > currentEnd) {
                            coveredLength += interval.end - interval.start;
                            currentEnd = interval.end;
                        } else {
                            coveredLength += max(
                                0LL, interval.end - max(currentEnd,
                                                        (long long)interval.start));
                            currentEnd = max(currentEnd, (long long)interval.end);
                        }
                    }
                    totalArea =
                        (totalArea + (event.x - PrevX) * coveredLength) % MOD;
                }
                if (event.type == 1) {
                    activeIntervals.insert({event.y1, event.y2});
                } else {
                    activeIntervals.erase(
                        activeIntervals.equal_range({event.y1, event.y2}).first);
                }
                PrevX = event.x;
            }
            return static_cast<int>(totalArea);
        }
};