/*输入两个数字n，m，n表示排序数的个数，m表示需要调用的排序算法。（1代表冒泡排序，2代表选择排序，3代表归并排序）
    接下来一行共n个数表示需要排序的数组。
        输出一行，为排序后的数组

            测试说明
                平台会对你编写的代码进行测试，比对你输出的数值与实际正确数值，只有所有数据全部计算正确才能通过测试：

                    测试输入： 5 1 6 2 4 3 1 预期输出： 1 2 3 4 6*/

#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
        }
    }
}
void SelectSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
}

void merge(vector<int> &nums, int l1, int r1, int l2, int r2)
{
    int i = l1, j = l2;
    vector<int> tmp(nums.size());
    int index = 0;
    while (i <= r1 && j <= r2)
    {
        if (nums[i] <= nums[j])
        {
            tmp[index++] = nums[i++];
        }
        else
        {
            tmp[index++] = nums[j++];
        }
    }
    while (i <= r1)
        tmp[index++] = nums[i++];
    while (j <= r2)
        tmp[index++] = nums[j++];
    for (int i = 0; i < index; i++)
    {
        nums[l1 + i] = tmp[i];
    }
}

void mergeSort(vector<int> &nums, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, mid + 1, right);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int &n : v)
    {
        cin >> n;
    }

    if (m == 1)
        BubbleSort(v, n);
    else if (m = 2)
        SelectSort(v, n);
    else if (m == 3)
        mergeSort(v, 0, n);
    for (int n : v)
    {
        cout << n << " ";
    }
}
