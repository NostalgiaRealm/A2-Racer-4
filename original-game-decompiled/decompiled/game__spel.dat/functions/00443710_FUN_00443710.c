
/* ==== FUN_00443710 @ 00443710 ==== 
 * signature: undefined __cdecl FUN_00443710(int param_1)
 * body: 00443710-0044376e
 */

void __cdecl FUN_00443710(int param_1)

{
  int iVar1;
  
  if (DAT_006fb8d0 == 0) {
    FUN_00443ef0(param_1);
    return;
  }
  if (param_1 != DAT_006fba58) {
    if (param_1 == *(int *)(DAT_006fba58 * 0xf0 + 0x44 + DAT_00715e50)) {
      iVar1 = FUN_004316d0(param_1);
      if (iVar1 != -1) goto LAB_00443764;
    }
    FUN_00443ef0(param_1);
    return;
  }
LAB_00443764:
  FUN_00443770(param_1);
  return;
}


