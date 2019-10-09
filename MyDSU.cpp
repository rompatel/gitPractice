
#define ll long long
#define N 2000010 
vector<ll> rt(N+10);
ll connect;

void ini(ll n)
{
	for(ll i=0;i<n+10;i++)
		rt[i]=i;

}

ll root(ll x)
{
	while(rt[x]!=x)
		{
			rt[x]=rt[rt[x]];
			x=rt[x];
		}

	return x;
}

void uni(ll a,ll b)
{
	ll x=root(a),y=root(b);
	rt[y]=x;
	//cout<<"C"<<connect<<"C";
	connect--;
}

