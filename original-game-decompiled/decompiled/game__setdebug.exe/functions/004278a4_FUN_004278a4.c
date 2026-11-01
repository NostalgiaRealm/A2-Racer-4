
/* ==== FUN_004278a4 @ 004278a4 ==== 
 * signature: undefined __register FUN_004278a4(undefined4 param_1, int param_2, LPCSTR param_3)
 * body: 004278a4-0042790e
 */

void FUN_004278a4(undefined4 param_1,int param_2,LPCSTR param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (param_3 != (LPCSTR)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    BVar2 = GetClassInfoA(DAT_004474d4,param_3,(LPWNDCLASSA)(param_2 + 0x24));
    if (BVar2 == 0) {
      BVar2 = GetClassInfoA((HINSTANCE)0x0,param_3,(LPWNDCLASSA)(param_2 + 0x24));
      if (BVar2 == 0) {
        BVar2 = GetClassInfoA(*(HINSTANCE *)PTR_DAT_00446b5c,param_3,(LPWNDCLASSA)(param_2 + 0x24));
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


