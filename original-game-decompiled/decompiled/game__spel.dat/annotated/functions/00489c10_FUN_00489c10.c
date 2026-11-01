
/* ==== FUN_00489c10 @ 00489c10 ==== 
 * signature: undefined __fastcall FUN_00489c10(void * param_1)
 * body: 00489c10-00489ca0
 */

void __fastcall FUN_00489c10(void *param_1)

{
  int iVar1;
  
  FUN_00489d30(param_1,(undefined4 *)((int)param_1 + 0x364));
  FUN_00489df0((undefined4 *)((int)param_1 + 0x380),0.8 <= *(float *)((int)param_1 + 0x248));
  FUN_00489df0((undefined4 *)((int)param_1 + 0x39c),*(float *)((int)param_1 + 0x24c) <= 0.2);
  iVar1 = FUN_00429360(DAT_006fba58);
  if (iVar1 == 0) {
    FUN_00489b70(param_1,(int *)0x0);
    return;
  }
  FUN_00489bd0((int)param_1);
  return;
}


