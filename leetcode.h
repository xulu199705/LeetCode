#ifndef __LEETCODE_H
#define __LEETCODE_H

#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <vector>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <limits> 
#include <iomanip>  
#include <string>
#include <numeric>
#include <complex>
#include <functional>
#include <cstring>
#include <cmath>
#include <cassert>

#define intmax			INT_MAX
#define intmin			INT_MIN
#define INF				(int)1000000007
#define EPS				1e-9
#define pb				push_back
#define mp				make_pair
#define all(c)			c.begin(), c.end()
#define forall(i,a,b)	for(int i=a;i<(b);++i)
#define trav(a,x)		for(auto & a: x)
#define in(a,b)			((b).find(a) != (b).end())
#define sz(c)			(int)(c).size()
#define input(a)		for(auto & x : a) cin >> x;

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}	
};

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

#endif