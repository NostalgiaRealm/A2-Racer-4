
/* ==== FUN_10010440 @ 10010440 ==== 
 * signature: undefined4 __stdcall FUN_10010440(void)
 * body: 10010440-1001056f
 */

undefined4 FUN_10010440(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_10031640 == 0) {
    PTR_DAT_10030d68 = *(undefined **)PTR_PTR_10030d98;
    PTR_DAT_10030d6c = *(undefined **)(PTR_PTR_10030d98 + 4);
    PTR_DAT_10030d70 = *(undefined **)(PTR_PTR_10030d98 + 8);
    PTR_PTR_10030d98 = (undefined *)&PTR_DAT_10030d68;
    FUN_10010800((int)DAT_10031674);
    FUN_100041a0(DAT_10031674,2);
    DAT_10031674 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_10010570((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_10030d98;
        puVar1[1] = *(undefined4 *)(PTR_PTR_10030d98 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_10030d98 + 8);
        PTR_PTR_10030d98 = (undefined *)puVar1;
        FUN_10010800((int)DAT_10031674);
        FUN_100041a0(DAT_10031674,2);
        uVar2 = 0;
        DAT_10031674 = puVar1;
      }
      else {
        FUN_10010800((int)puVar1);
        FUN_100041a0(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


