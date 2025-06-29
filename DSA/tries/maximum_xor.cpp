#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mx = 0;

    class Node {
    public:
        Node* left = NULL;  
        Node* right = NULL; 

        void insert(int num) {
            Node* curr = this;
            for (int i = 31; i >= 0; i--) {
                int bit = (num >> i) & 1;
                if (bit == 0) {
                    if (!curr->left)
                        curr->left = new Node();
                    curr = curr->left;
                } else {
                    if (!curr->right)
                        curr->right = new Node();
                    curr = curr->right;
                }
            }
        }

        int findMax(int num) {
            Node* curr = this;
            int temp = 0;
            for (int i = 31; i >= 0; i--) {
                temp = temp*2;
                int bit = (num >> i) & 1;
                if (bit == 0) {
                    if (curr->right) {
                        temp+=1;
                        curr = curr->right;
                    } else {
                        curr = curr->left;
                    }
                } else {
                    if (curr->left) {
                        temp +=1;
                        curr = curr->left;
                    } else {
                        curr = curr->right;
                    }
                }
            }
            return temp;
        }
    };

    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size();
        Node root;
        root.insert(nums[0]);

        for (int i = 1; i < n; i++) {
            mx = max(mx, root.findMax(nums[i]));
            root.insert(nums[i]);
        }

        return mx;
    }
};
