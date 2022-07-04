// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      
        if(head == NULL)
            return NULL;
        ListNode *curr = head;
        while(curr->next != NULL)
        {
            if(curr->val == curr->next->val)
            {
                ListNode *temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
            else
                curr = curr->next;
        }
        
        return head;

    }
};

//3 elements sum in arrray
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     int target = sum/2;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(arr[i] + arr[j] == target)
//             {
//                 count++;
//             }
//         }
//     }
//     cout << count;
//     return 0;
//print float with precision 3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
//     float f;
//     cin >> f;
//     cout << fixed << setprecision(3) << f;
cout<<setprecision(20)<<fixed;


floating point up to 3 decimal places
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float f;
    cin >> f;
    cout << fixed << setprecision(3) << f;
    return 0;
}

char a[2]={'Even','Odd'};
void update(int *a,int *b) {
    // Complete this function  
    // a=a+b; b=a-b; 
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;

     cout<<a<<" \n"<<b<<endl; 
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

 if(a<0)
    *a*=-1;
    else if(b<0)
    *b*=-1;
    else
    *a=*b=0;


    reverse array
    int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }


Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output
5
9
int main()
{

}
void printKMax(int arr[], int n, int k){
	//Write your code here.
    
    
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
//largest proper divisor of a number
void process_input(int n) {
    int d = largest_proper_divisor(n);
    cout << d << endl;

    cout << "result=" << d << endl;
}
void largest_proper_divisor(int n) {
    int i = 2;
    while (i <= n) {
        if (n % i == 0) {
            if (i == n) {
                cout << n;
                return;
            }
            largest_proper_divisor(n / i);
            cout << "*" << i;
            return;
        }
        i++;
    }
}

john doe registered
first_name=john,last_name=doe registered

i


//java double input scanner
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        System.out.println(a+b);
        String s=sc.next();
        //getline in string
        String s=sc.nextLine();
    }
}

//java parse int to string
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        String s=Integer.toString(a);
        System.out.println(s);
    }
}

String s=Integer.toString(a);
