
/* ==== FUN_0050cc00 @ 0050cc00 ==== 
 * signature: undefined __fastcall FUN_0050cc00(int param_1)
 * body: 0050cc00-0050cc88
 */

void __fastcall FUN_0050cc00(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 0x12) != 0) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x14) + iVar2 * 4))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x12));
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x14);
  if (pvVar1 != (LPVOID)(param_1 + 0x18)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  iVar2 = 0;
  if (*(short *)(param_1 + 0x1a) != 0) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar2 * 4))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x1a));
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x1c);
  if (pvVar1 != (LPVOID)(param_1 + 0x20)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}


