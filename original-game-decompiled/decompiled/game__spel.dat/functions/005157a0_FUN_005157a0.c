
/* ==== FUN_005157a0 @ 005157a0 ==== 
 * signature: undefined4 * __cdecl FUN_005157a0(int param_1, uint param_2, int param_3)
 * body: 005157a0-00515814
 */

undefined4 * __cdecl FUN_005157a0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 4);
    piVar1 = *(int **)(param_1 + 4);
    while (piVar1 != (int *)0x0) {
      puVar2 = puVar2 + 1;
      if ((piVar1[5] & 0x10000000U) == 0) {
        FUN_005165b0(piVar1);
        FUN_00514ed0(piVar1);
      }
      piVar1 = (int *)*puVar2;
    }
  }
  puVar2 = FUN_005162f0();
  puVar2[0xd] = param_1;
  puVar2[0x14] = (param_2 & 1) << 0xb | puVar2[0x14] & 0xfffff7ff;
  FUN_00514020(puVar2 + 0xf,param_3);
  FUN_00514e50((int)puVar2);
  return puVar2;
}


