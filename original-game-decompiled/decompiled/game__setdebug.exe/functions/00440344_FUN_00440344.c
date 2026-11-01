
/* ==== FUN_00440344 @ 00440344 ==== 
 * signature: undefined __register FUN_00440344(int param_1)
 * body: 00440344-0044039f
 */

void FUN_00440344(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  HCURSOR pHVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x50);
  while (puVar3 != (undefined4 *)0x0) {
    iVar1 = puVar3[1];
    if ((((-0x12 < iVar1) && (iVar1 < -0xb)) || (iVar1 == -0x15)) || (0 < iVar1)) {
      DestroyCursor((HCURSOR)puVar3[2]);
    }
    puVar2 = (undefined4 *)*puVar3;
    FUN_004026d0((int)puVar3);
    puVar3 = puVar2;
  }
  pHVar4 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  if (pHVar4 != *(HCURSOR *)(param_1 + 0x54)) {
    DestroyCursor(*(HCURSOR *)(param_1 + 0x54));
  }
  return;
}


