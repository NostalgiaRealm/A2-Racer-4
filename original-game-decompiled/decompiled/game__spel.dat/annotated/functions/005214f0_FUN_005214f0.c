
/* ==== FUN_005214f0 @ 005214f0 ==== 
 * signature: undefined __fastcall FUN_005214f0(int param_1)
 * body: 005214f0-0052155d
 */

void __fastcall FUN_005214f0(int param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1[3] == 0) {
      *(undefined4 *)(param_1 + 0x30) = puVar1[2];
    }
    else {
      *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
    }
    if (puVar1[2] != 0) {
      *(undefined4 *)(puVar1[2] + 0xc) = puVar1[3];
    }
    puVar1[2] = 0xffffffff;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x30);
  }
  pvVar3 = *(LPVOID *)(param_1 + 0x48);
  while (pvVar3 != (LPVOID)0x0) {
    pvVar2 = *(LPVOID *)((int)pvVar3 + 0x28);
    FUN_0054b339(pvVar3);
    pvVar3 = pvVar2;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


