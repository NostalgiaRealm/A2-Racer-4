
/* ==== FUN_004b2410 @ 004b2410 ==== 
 * signature: undefined __stdcall FUN_004b2410(void)
 * body: 004b2410-004b2495
 */

void FUN_004b2410(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_00719c2c;
  if (0 < DAT_00719c2c) {
    do {
      puVar1 = *(undefined4 **)((int)DAT_00719c28 + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        iVar2 = DAT_00719c2c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (DAT_00719c34 == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339(DAT_00719c28);
  }
  if (DAT_00719c34 != 0) {
    FUN_0054b339(DAT_00719c38);
    DAT_00719c34 = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


