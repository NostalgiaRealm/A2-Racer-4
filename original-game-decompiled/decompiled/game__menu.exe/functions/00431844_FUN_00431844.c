
/* ==== FUN_00431844 @ 00431844 ==== 
 * signature: undefined __register FUN_00431844(undefined4 param_1, int param_2, LPCSTR param_3)
 * body: 00431844-004318ae
 */

void FUN_00431844(undefined4 param_1,int param_2,LPCSTR param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (param_3 != (LPCSTR)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    BVar2 = GetClassInfoA(DAT_004ac4dc,param_3,(LPWNDCLASSA)(param_2 + 0x24));
    if (BVar2 == 0) {
      BVar2 = GetClassInfoA((HINSTANCE)0x0,param_3,(LPWNDCLASSA)(param_2 + 0x24));
      if (BVar2 == 0) {
        BVar2 = GetClassInfoA(*(HINSTANCE *)PTR_DAT_004ab73c,param_3,(LPWNDCLASSA)(param_2 + 0x24));
        if (BVar2 == 0) {
          GetClassInfoA(*(HINSTANCE *)(param_2 + 0x34),param_3,(LPWNDCLASSA)(param_2 + 0x24));
        }
      }
    }
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffbf1f | 3;
  }
  return;
}


