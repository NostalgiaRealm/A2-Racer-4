
/* ==== FUN_0052df60 @ 0052df60 ==== 
 * signature: int __cdecl FUN_0052df60(int * param_1, int * param_2)
 * body: 0052df60-0052df7f
 */

int __cdecl FUN_0052df60(int *param_1,int *param_2)

{
  return (*(uint *)(*param_1 + 0x50) & 0x1ff) - (*(uint *)(*param_2 + 0x50) & 0x1ff);
}


