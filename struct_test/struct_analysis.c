#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//u_char是8位 
typedef struct _ethernet_h
{
}ethernet_h;

typedef  struct _ip_h
{
}ip_h;

typedef  struct _arp_h
{
}arp_h;

typedef struct _tcp_h
{
}tcp_h;

typedef struct _udp_h
{
}udp_h;

typedef struct _icmp_h
{
}icmp_h;


//数据包的分析结构
typedef struct _p_data_analysis
{
	char p_type[8];                   //包类型
	int time[6];                      //时间戳
	int len;                          //长度

	struct _ethernet_h *eth_hdr;      //以太网帧头
	struct _arp_h *arp_hdr;           //arp包头
	struct _ip_h *ip_hdr;             //ip包头
	struct _icmp_h *icmp_hdr;         //icmp包头
	struct _udp_h *udp_hdr;           //udp包头
	struct _tcp_h *tcp_hdr;           //tcp包头

}p_data_analysis;

int main()
{
	printf("p_data_analysis： %d\n",sizeof(p_data_analysis));

	p_data_analysis * data = (p_data_analysis *)malloc(sizeof(p_data_analysis));
	//或
	//struct _p_data_analysis * data = (struct _p_data_analysis *)malloc(sizeof(struct _p_data_analysis));
	printf("data->eth_hdr addr: %p\n",data->eth_hdr);

	memset(data, 0, sizeof(p_data_analysis));
	//或
	//memset(data, 0, sizeof(struct _p_data_analysis));
	data->len = 1460;	
	printf("data addr: %p\n",data);
	printf("data->len: %d\n",data->len);
	printf("data->eth_hdr: %d\n",data->eth_hdr);
	printf("data->eth_hdr addr： %p\n",data->eth_hdr);
	data->eth_hdr = (struct _ethernet_h *)malloc(sizeof(struct _ethernet_h));
	printf("data->eth_hdr addr: %p\n",data->eth_hdr);
    
    
	/*
	//试试不申请内存空间会发生什么？ 
	p_data_analysis * data;
	//memset(data, 0, sizeof(p_data_analysis));
	data->len = 1460;
	printf("%p\n",data);
	printf("%d\n",data->len);
	*/
	 
	return 0;
}
