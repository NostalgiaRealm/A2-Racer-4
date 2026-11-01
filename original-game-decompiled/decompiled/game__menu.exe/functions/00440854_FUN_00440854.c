
/* ==== FUN_00440854 @ 00440854 ==== 
 * signature: undefined4 __register FUN_00440854(int * param_1)
 * body: 00440854-004408d5
 */

undefined4 FUN_00440854(int *param_1)

{
  HMENU pHVar1;
  char *pcVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 *puVar4;
  char local_204 [512];
  
  puVar4 = &stack0xfffffffc;
  local_204[0] = '\0';
  if (param_1[0xb] != 0) {
    pHVar1 = (HMENU)(**(code **)(*param_1 + 0x34))();
    FUN_004407b4(pHVar1,extraout_EDX,extraout_ECX,(int)puVar4);
  }
  if (param_1[0xc] != 0) {
    pcVar2 = FUN_004040a0((undefined *)param_1[0xc]);
    iVar3 = FUN_00408c2c(pcVar2,local_204);
    if (iVar3 == 0) {
      return 0;
    }
  }
  FUN_00403e8c(param_1 + 0xc,local_204,0x200);
  return 1;
}


