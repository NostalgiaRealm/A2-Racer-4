
/* ==== FUN_00538510 @ 00538510 ==== 
 * signature: uint __cdecl FUN_00538510(int * param_1)
 * body: 00538510-0053859f
 */

uint __cdecl FUN_00538510(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *local_4;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_redundant_vertex__check_if_v__005c6b6c);
  }
  local_4 = FUN_00538200((int)piVar1);
  if (local_4 != (int *)0x0) {
    param_1 = FUN_00539410((int)piVar1);
    uVar2 = FUN_00534d30((uint)piVar1,local_4,param_1);
    if (uVar2 != 0) {
      FUN_00538a60((int)piVar1,uVar2,(int)param_1,0,0);
    }
    FUN_00514ba0((int *)&param_1);
    FUN_00514ba0((int *)&local_4);
  }
  return uVar2;
}


