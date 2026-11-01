
/* ==== FUN_00513660 @ 00513660 ==== 
 * signature: undefined __fastcall FUN_00513660(int * param_1)
 * body: 00513660-005136fa
 */

void __fastcall FUN_00513660(int *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  FUN_0051fac0(*param_1,&local_40,&local_20);
  FUN_00509060(*param_1,&local_40,&local_50,&local_48);
  iVar1 = *param_1;
  *(float *)(iVar1 + 0xc) = (float)local_20;
  *(float *)(iVar1 + 0x10) = (float)local_18;
  *(float *)(iVar1 + 0x14) = (float)local_10;
  pfVar2 = (float *)*param_1;
  *pfVar2 = (float)local_40;
  pfVar2[1] = (float)local_38;
  pfVar2[2] = (float)local_30;
  *(float *)(*param_1 + 0x18) = (float)local_50;
  iVar1 = *param_1;
  uVar3 = *(uint *)(iVar1 + 0x1c);
  lVar4 = __ftol();
  *(uint *)(iVar1 + 0x1c) = ((uint)lVar4 ^ uVar3) & 0xff ^ uVar3;
  return;
}


