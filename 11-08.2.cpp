/*������������n��m��n��ʾ�������ĸ�����m��ʾ��Ҫ���õ������㷨����1����ð������2����ѡ������3����鲢����
    ������һ�й�n������ʾ��Ҫ��������顣
        ���һ�У�Ϊ����������

            ����˵��
                ƽ̨������д�Ĵ�����в��ԣ��ȶ����������ֵ��ʵ����ȷ��ֵ��ֻ����������ȫ��������ȷ����ͨ�����ԣ�

                    �������룺 5 1 6 2 4 3 1 Ԥ������� 1 2 3 4 6*/

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
