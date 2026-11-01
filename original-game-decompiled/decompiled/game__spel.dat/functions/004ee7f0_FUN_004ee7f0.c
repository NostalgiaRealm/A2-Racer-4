
/* ==== FUN_004ee7f0 @ 004ee7f0 ==== 
 * signature: undefined __fastcall FUN_004ee7f0(int param_1)
 * body: 004ee7f0-004ee895
 */

void __fastcall FUN_004ee7f0(int param_1)

{
  longlong lVar1;
  
  FUN_004ee700(param_1);
  lVar1 = __ftol();
  *(int *)(param_1 + 0xf0) = (int)lVar1;
  FUN_004ee6b0((int *)(param_1 + 0xf0),*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x118));
  lVar1 = __ftol();
  *(int *)(param_1 + 0xf4) = (int)lVar1;
  FUN_004ee6b0((int *)(param_1 + 0xf4),*(int *)(param_1 + 0x11c),*(int *)(param_1 + 0x120));
  lVar1 = __ftol();
  *(int *)(param_1 + 0xf8) = (int)lVar1;
  FUN_004ee6b0((int *)(param_1 + 0xf8),*(int *)(param_1 + 0x124),*(int *)(param_1 + 0x128));
  FUN_004ee720(param_1);
  return;
}


