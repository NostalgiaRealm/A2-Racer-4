
/* ==== FUN_004402e8 @ 004402e8 ==== 
 * signature: undefined __register FUN_004402e8(int param_1)
 * body: 004402e8-00440341
 */

void FUN_004402e8(int param_1)

{
  HCURSOR pHVar1;
  int iVar2;
  undefined4 *puVar3;
  HINSTANCE pHVar4;
  
  pHVar1 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  *(HCURSOR *)(param_1 + 0x54) = pHVar1;
  iVar2 = -0x16;
  puVar3 = &DAT_00446914;
  do {
    pHVar4 = DAT_004474d4;
    if (((iVar2 < -0x11) || (-0xc < iVar2)) && (iVar2 != -0x15)) {
      pHVar4 = (HINSTANCE)0x0;
    }
    pHVar1 = LoadCursorA(pHVar4,(LPCSTR)*puVar3);
    FUN_004403a0(param_1,iVar2,pHVar1);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  return;
}


