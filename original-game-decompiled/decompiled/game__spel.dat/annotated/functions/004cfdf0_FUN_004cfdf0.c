
/* ==== FUN_004cfdf0 @ 004cfdf0 ==== 
 * signature: uint __fastcall FUN_004cfdf0(int * param_1)
 * body: 004cfdf0-004cfe1a
 */

uint __fastcall FUN_004cfdf0(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  *(int *)param_1[0xb] = *(int *)param_1[0xb] + -1;
  pbVar1 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar1 + 1;
  return (uint)*pbVar1;
}


