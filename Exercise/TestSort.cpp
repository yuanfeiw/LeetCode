#include "..\LeetCode\LeetCode.h"
#include "..\LeetCode\LeetCodeSort.h"
#include "TestSort.h"
void TestLeetCode414(void)
{
    Logger::WriteMessage("Test Leet Code 414");
    LeetCodeSort leetCode;
    vector<int> nums;
    int third_max;
    nums = { 3, 2, 1 };
    Logger::WriteMessage(nums);
    third_max = leetCode.thirdMax(nums);
    Logger::WriteMessage("Third max number in the list is " + to_string(third_max));

    nums = { 1, 2 };
    Logger::WriteMessage(nums);
    third_max = leetCode.thirdMax(nums);
    Logger::WriteMessage("Third max number in the list is " + to_string(third_max));

    nums = { 2, 2, 3, 1 };
    Logger::WriteMessage(nums);
    third_max = leetCode.thirdMax(nums);
    Logger::WriteMessage("Third max number in the list is " + to_string(third_max));
}

void TestLeetCode1213(void)
{
    Logger::WriteMessage("Test Leet Code 1213");
    LeetCodeSort leetCode;
    vector<int> arr1 = { 1, 2, 3, 4, 5 };
    vector<int> arr2 = { 1, 2, 5, 7, 9 };
    vector<int> arr3 = { 1, 3, 4, 5, 8 };
    vector<int> result = leetCode.arraysIntersection(arr1, arr2, arr3);
    Logger::WriteMessage(arr1);
    Logger::WriteMessage(arr2);
    Logger::WriteMessage(arr3);
    Logger::WriteMessage(result);
}

void TestLeetCode373(void)
{
    Logger::WriteMessage("Test Leet Code 373");
    LeetCodeSort leetCode;
    vector<int> nums1 = { 0, 0, 0, 0, 0 };
    vector<int> nums2 = { -3, 22, 35, 56, 76 };
    int k = 22;
    vector<vector<int>> result = leetCode.kSmallestPairs(nums1, nums2, k);
    Logger::WriteMessage(nums1);
    Logger::WriteMessage(nums2);
    Logger::WriteMessage("k = " + to_string(k));
    Logger::WriteMessage(result);

    nums1 = { 1,7,11 };
    nums2 = { 2,4,6 };
    k = 3;
    result = leetCode.kSmallestPairs(nums1, nums2, k);
    Logger::WriteMessage(nums1);
    Logger::WriteMessage(nums2);
    Logger::WriteMessage("k = " + to_string(k));
    Logger::WriteMessage(result);

    nums1 = { 1, 1, 2 };
    nums2 = { 1, 2, 3 };
    k = 2;
    result = leetCode.kSmallestPairs(nums1, nums2, k);
    Logger::WriteMessage(nums1);
    Logger::WriteMessage(nums2);
    Logger::WriteMessage("k = " + to_string(k));
    Logger::WriteMessage(result);

    nums1 = { 1, 2 };
    nums2 = { 3 };
    k = 3;
    result = leetCode.kSmallestPairs(nums1, nums2, k);
    Logger::WriteMessage(nums1);
    Logger::WriteMessage(nums2);
    Logger::WriteMessage("k = " + to_string(k));
    Logger::WriteMessage(result);
}

void TestLeetCode683(void)
{
    LeetCodeSort leetCode;
    vector<int> flowers = { 6, 5, 8, 9, 7, 1, 10, 2, 3, 4 };
    int k = 2;
    int result = leetCode.kEmptySlots(flowers, k);
    Logger::WriteMessage(flowers);
    Logger::WriteMessage("k = " + to_string(k) + "; result = " + to_string(result));

    flowers = { 1, 3, 2 };
    k = 1;
    result = leetCode.kEmptySlots(flowers, k);
    Logger::WriteMessage(flowers);
    Logger::WriteMessage("k = " + to_string(k) + "; result = " + to_string(result));

    flowers = { 1, 2, 3 };
    k = 1;
    result = leetCode.kEmptySlots(flowers, k);
    Logger::WriteMessage(flowers);
    Logger::WriteMessage("k = " + to_string(k) + "; result = " + to_string(result));
}

void TestLeetCode774(void)
{
    Logger::WriteMessage("Test Leet Code 774");
    LeetCodeSort leetCode;
    vector<int> stations = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int K = 9;
    double result = leetCode.minmaxGasDist(stations, K);
    Logger::WriteMessage(stations);
    Logger::WriteMessage("result = " + to_string(result));

    stations = { 191487, 226099, 229330, 275915, 347493, 361220, 438140, 517380, 569432, 591085, 637975, 673423 };
    K = 954;
    result = leetCode.minmaxGasDist(stations, K);
    Logger::WriteMessage(stations);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode846(void)
{
    Logger::WriteMessage("Test Leet Code 845");
    LeetCodeSort leetCode;
    vector<int> hand = { 1,2,3,6,2,3,4,7,8 };
    int W = 3;
    bool result = leetCode.isNStraightHand(hand, W);
    Logger::WriteMessage(hand);
    Logger::WriteMessage("W = " + to_string(W) + "; result = " + (result ? "true" : "false"));

    hand = { 1,2,3,4,5 };
    W = 4;
    result = leetCode.isNStraightHand(hand, W);
    Logger::WriteMessage(hand);
    Logger::WriteMessage("W = " + to_string(W) + "; result = " + (result ? "true" : "false"));
}

void TestLeetCode857(void)
{
    Logger::WriteMessage("Test Leet Code 857");
    LeetCodeSort leetCode;
    vector<int> quality = { 10, 20, 5 };
    vector<int> wage = { 70, 50, 30 };
    int K = 2;
    double result = leetCode.mincostToHireWorkers(quality, wage, K);
    Logger::WriteMessage(quality);
    Logger::WriteMessage(wage);
    Logger::WriteMessage("K = " + to_string(K) + "; result = " + to_string(result));

    quality = { 3,1,10,10,1 };
    wage = { 4,8,2,2,7 };
    K = 3;
    result = leetCode.mincostToHireWorkers(quality, wage, K);
    Logger::WriteMessage(quality);
    Logger::WriteMessage(wage);
    Logger::WriteMessage("K = " + to_string(K) + "; result = " + to_string(result));
}

void TestLeetCode295(void)
{
    Logger::WriteMessage("Test Leet Code 295");
    vector<string> commands =
    {
        "MedianFinder", "addNum", "findMedian", "addNum", "findMedian", 
        "addNum", "findMedian", "addNum", "findMedian", "addNum", "findMedian", 
        "addNum", "findMedian", "addNum", "findMedian"
    };
    vector<int> data =
    {
        0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0
    };

    MedianFinder* medianFinder = nullptr;

    vector<string> result;
    for (size_t i = 0; i < commands.size(); i++)
    {
        if (commands[i] == "MedianFinder")
        {
            medianFinder = new MedianFinder();
            result.push_back("null");
        }
        else if (commands[i] == "addNum")
        {
            medianFinder->addNum(data[i]);
            result.push_back("null");
        }
        else if (commands[i] == "findMedian")
        {
            double value = medianFinder->findMedian();
            result.push_back(to_string(value));
        }
    }
    Logger::WriteMessage(result);
}

void TestLeetCode673(void)
{
    LeetCodeSort leetCode;
    vector<int> nums = { 1,3,5,4,7 };
    int result = leetCode.findNumberOfLIS(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("result = " + to_string(result));

    nums = { 2,2,2,2,2 };
    result = leetCode.findNumberOfLIS(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("result = " + to_string(result));

    nums = { 1, 2, 4, 3, 5, 4, 7, 2 };
    result = leetCode.findNumberOfLIS(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode300(void)
{
    Logger::WriteMessage("Test Leet Code 300");
    LeetCodeSort leetCode;
    vector<int> nums = { 10, 9, 2, 5, 3, 7, 101, 18 };
    Logger::WriteMessage(nums);
    int result = leetCode.lengthOfLIS(nums);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode354(void)
{
    Logger::WriteMessage("Test Leet Code 354");
    LeetCodeSort leetCode;
    vector<pair<int, int>> envelopes =
    {
        { 1, 2 },{ 2, 3 }, { 3, 1 }, {4, 2}, {5, 3}
    };
    int result = leetCode.maxEnvelopes(envelopes);
    Logger::WriteMessage(envelopes);
    Logger::WriteMessage("result = " + to_string(result));

    envelopes =
    {
        { 5, 4 }, { 6, 4 }, { 6, 7 }, { 2, 3 }
    };
    result = leetCode.maxEnvelopes(envelopes);
    Logger::WriteMessage(envelopes);
    Logger::WriteMessage("result = " + to_string(result));

    envelopes =
    {
        { 1, 1 }
    };
    result = leetCode.maxEnvelopes(envelopes);
    Logger::WriteMessage(envelopes);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode88(void)
{
    Logger::WriteMessage("Test Leet Code 88");
    LeetCodeSort leetCode;
    vector<int> nums1 = { 1,2,3,4,6,8, 10, 0, 0, 0 };
    vector<int> nums2 = { 5, 6, 7 };
    Logger::WriteMessage(nums1);
    Logger::WriteMessage(nums2);
    leetCode.merge(nums1, 7, nums2, 3);
    Logger::WriteMessage(nums1);
}

void TestLeetCode315(void)
{
    Logger::WriteMessage("Test Leet Code 315");
    LeetCodeSort leetCode;

    vector<int> nums = { 5, 2, 6, 1 };
    vector<int> result = leetCode.countSmaller(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage(result);

    nums =
    {
        26, 78, 27, 100, 33, 67, 90, 23, 66, 5, 38, 7, 35, 23, 52, 22, 83,
        51, 98, 69, 81, 32, 78, 28, 94, 13, 2, 97, 3, 76, 99, 51, 9, 21,
        84, 66, 65, 36, 100, 41
    };
    result = leetCode.countSmaller(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage(result);
}

void TestLeetCode327(void)
{
    Logger::WriteMessage("Test Leet Code 327");
    LeetCodeSort leetCode;

    vector<int> nums = { -1, 1 };
    int lower = 0, upper = 0;
    int count = leetCode.countRangeSum(nums, lower, upper);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("lower = " + to_string(lower) + " upper = " + to_string(upper) + " count = " + to_string(count));

    nums = { -2147483647, 0, -2147483647, 2147483647 };
    lower = -564, upper = 3864;
    count = leetCode.countRangeSum(nums, lower, upper);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("lower = " + to_string(lower) + " upper = " + to_string(upper) + " count = " + to_string(count));


    nums = { -2, 5, -1 };
    lower = -2, upper = 2;
    count = leetCode.countRangeSum(nums, lower, upper);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("lower = " + to_string(lower) + " upper = " + to_string(upper) + " count = " + to_string(count));
}

void TestLeetCode632(void)
{
    LeetCodeSort leetCode;
    vector<vector<int>> nums = { { 4, 10, 15, 24, 26 },{ 0, 9, 12, 20 },{ 5, 18, 22, 30 } };

    vector<int> result = leetCode.smallestRange(nums);
    Logger::WriteMessage(result);
}

void TestLeetCode493(void)
{
    Logger::WriteMessage("Test Leet Code 493");
    LeetCodeSort leetCode;
    vector<int> nums = { 1, 3, 2, 3, 1 };
    int result = leetCode.reversePairs(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("reverse pairs = " + to_string(result));

    nums = { 2, 4, 3, 5, 1 };
    result = leetCode.reversePairs(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("reverse pairs = " + to_string(result));

    nums = {};
    result = leetCode.reversePairs(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("reverse pairs = " + to_string(result));
}

void TestLeetCode973(void)
{
    Logger::WriteMessage("Test Leet Code 973");
    LeetCodeSort leetCode;
    vector<vector<int>> points = { {1, 3},{-2, 2} };
    int K = 1;
    vector<vector<int>> result = leetCode.kClosest(points, K);
    Logger::WriteMessage("K = " + to_string(K));
    Logger::WriteMessage(points);
    Logger::WriteMessage(result);

    points = { { 3, 3 },{ 5, -1 },{ -2, 4 } };
    K = 2;
    result = leetCode.kClosest(points, K);
    Logger::WriteMessage("K = " + to_string(K));
    Logger::WriteMessage(points);
    Logger::WriteMessage(result);
}

void TestLeetCode1331(void)
{
    Logger::WriteMessage("Test Leet Code 1331");
    LeetCodeSort leetCode;
    vector<int> arr = { 40, 10, 20, 30 };
    vector<int> result = leetCode.arrayRankTransform(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage(result);

    arr = { 100,100,100 };
    result = leetCode.arrayRankTransform(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage(result);

    arr = { 37,12,28,9,100,56,80,5,12 };
    result = leetCode.arrayRankTransform(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage(result);
}

void TestLeetCodeSort(void)
{
    TestLeetCode1331();
    TestLeetCode973();
    TestLeetCode493();
    TestLeetCode632();
    TestLeetCode327();
    TestLeetCode88();
    TestLeetCode300();
    TestLeetCode354();
    TestLeetCode673();
    TestLeetCode295();
    TestLeetCode373();
    TestLeetCode683(); 
    TestLeetCode774();
    TestLeetCode846();
    TestLeetCode857();
    TestLeetCode1213();
}