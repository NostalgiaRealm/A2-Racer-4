
/* ==== FUN_004da170 @ 004da170 ==== 
 * signature: undefined __fastcall FUN_004da170(undefined4 * param_1)
 * body: 004da170-004da214
 */

/* WARNING: Removing unreachable block (ram,0x004da1ca) */
/* WARNING: Removing unreachable block (ram,0x004da1cb) */
/* WARNING: Removing unreachable block (ram,0x004da1d9) */

void __fastcall FUN_004da170(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005705e7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005778e0;
  piVar2 = (int *)param_1[2];
  local_4 = 0;
  if (piVar2 != (int *)param_1[3]) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)param_1[3]);
  }
  param_1[3] = param_1[2];
  uVar1 = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 1);
  FUN_0054b339(*(LPVOID *)(uVar1 + 4));
  *(undefined4 *)(uVar1 + 4) = 0;
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}


