
/* ==== FUN_0052b5e0 @ 0052b5e0 ==== 
 * signature: undefined4 __cdecl FUN_0052b5e0(int param_1)
 * body: 0052b5e0-0052b64b
 */

undefined4 __cdecl FUN_0052b5e0(int param_1)

{
  int iVar1;
  double local_10;
  
  FUN_005273a0(DAT_0074c5f0,param_1,&local_10);
  iVar1 = DAT_0074c03c;
  if (0.0 < local_10) {
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(double *)(*(int *)(param_1 + 0x18) + iVar1 * 8) =
           -*(double *)(*(int *)(param_1 + 0x18) + iVar1 * 8);
    }
    *(double *)(param_1 + 0x10) = -*(double *)(param_1 + 0x10);
    return 1;
  }
  return 0;
}


