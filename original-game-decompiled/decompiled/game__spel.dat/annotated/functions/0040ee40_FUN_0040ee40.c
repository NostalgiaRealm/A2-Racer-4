
/* ==== FUN_0040ee40 @ 0040ee40 ==== 
 * signature: undefined __fastcall FUN_0040ee40(int param_1)
 * body: 0040ee40-0040eec0
 */

void __fastcall FUN_0040ee40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)(param_1 + 0x14))();
  FUN_004c3fa0((byte *)s_AIMgr___d_object_s__00592414);
  iVar4 = 0;
  iVar2 = (**(code **)*puVar1)();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (iVar3 = (**(code **)*puVar1)(), iVar3 <= iVar4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_object_index____0058fd14);
      FUN_00416f20((char *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + iVar2));
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x30;
      iVar3 = (**(code **)*puVar1)();
    } while (iVar4 < iVar3);
  }
  return;
}


