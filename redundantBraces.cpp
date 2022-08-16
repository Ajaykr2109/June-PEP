//stringest password out of linked list in c
struct node
{
    int data;
    node *next;
};
int strongest_password(struct node *head)
{
    int max = 0;
    int count = 0;
    int count_max = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > count_max)
        {
            count_max = count;
        }
        temp = temp->next;
    }
    return count_max;
}

int main()
{
    int len,result;
    scanf("%d",&len);
    struct node *head=build_linked_list(len);
    result=strongest_password(head);
    printf("%d",result);
    return 0;
}

int consecutive_nodes_of_tree(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = consecutive_nodes_of_tree(root->left);
    int right = consecutive_nodes_of_tree(root->right);
    if (left == 0 && right == 0)
    {
        return 0;
    }
    if (left == 0 || right == 0)
    {
        return 1;
    }
    if (left + 1 == right)
    {
        return right + 1;
    }
    return 0;
}
int number_of_intelligent_group(int length, int *intelligence,int k)
{
    int count = 0;
    int i = 0;
    while (i < length)
    {
        int j = i + 1;
        while (j < length && intelligence[j] >= intelligence[i])
        {
            j++;
        }
        if (j - i >= k)
        {
            count++;
        }
        i = j;
    }
    return count;

}
int main()
{
    int *intelligence,k,length,i,intelligent_group_count;
    scanf("%d",&length);
    intelligence=(int *)malloc(length*sizeof(int));
    for(i=0;i<length;i++)
    {
        scanf("%d",&intelligence[i]);
    }
    scanf("%d",&k);
    intelligent_group_count=number_of_intelligent_group(length,intelligence,k);
    printf("%d",intelligent_group_count);
}

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //using stack
    vector<int> result;
    stack<int> s;
    for(int i=0;i<nums1.size();i++)
    {
        while(!s.empty() && nums2[s.top()]<nums1[i])
        {
            result.push_back(nums2[s.top()]);
            s.pop();
        }
        s.push(i);    
    }
    while(!s.empty())
    {
        result.push_back(-1);
        s.pop();
    }
    return result;
    }
};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Solution s;
    vector<int> result = s.nextGreaterElement(arr, n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
//
vector<int>calculateSpan(int price[], int n)
{
    vector<int> span;
    span.push_back(1);
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        while(j>=0 && price[i]>=price[j])
        {
            j--;
        }
        if(j==-1)
        {
            span.push_back(i+1);
        }
        else
        {
            span.push_back(i-j);
        }
    }
    return span;
}   
//

vector<int> calculateSpan(int price[], int n)
{
    vector<int> span;
    span.push_back(1);
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        while(j>=0 && price[i]>=price[j])
        {
            j--;
        }
        if(j==-1)
        {
            span.push_back(i+1);
        }
        else
        {
            span.push_back(i-j);
        }
    }
    return span;
}


vector<int> nextGreaterElements(vector<int>&  nums)
{
    vector<int> result;
    int n = nums.size();
    vector<int> span = calculateSpan(nums, n);
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < n && nums[i] >= nums[j])
        {
            j++;
        }
        if (j == n)
        {
            result.push_back(-1);
        }
        else
        {
            result.push_back(nums[j]);
        }
    }
    return result;
}
//
public static int ArrayChallenge(int[] arr)
{

}

