
/* ==== TApplication.Destroy @ 004410c0 ==== 
 * signature: undefined TApplication.Destroy(void)
 * body: 004410c0-0044119c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TApplication_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 extraout_EDX;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ((HMODULE)0x20 < (HMODULE)piVar1[0x24]) {
    FreeLibrary((HMODULE)piVar1[0x24]);
  }
  if (((piVar1[9] != 0) && ((char)piVar1[0x25] != '\0')) && (piVar1[0x10] != 0)) {
    FUN_00442670();
  }
  *(undefined1 *)((int)piVar1 + 0x8d) = 0;
  FUN_00442ca8((int)piVar1);
  FUN_00442688((int)piVar1,'\0');
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  FUN_004421e8((int)piVar1,extraout_EDX,extraout_ECX,0x441564,(int)piVar1);
  if (((HWND)piVar1[9] != (HWND)0x0) && ((char)piVar1[0x25] != '\0')) {
    if (*PTR_DAT_00446be0 != '\0') {
      SendMessageA((HWND)piVar1[9],0x80,1,0);
    }
    DestroyWindow((HWND)piVar1[9]);
  }
  if (piVar1[0xd] != 0) {
    FUN_00439c68(piVar1[0xd]);
  }
  FUN_00402d14((int *)piVar1[0x26]);
  FUN_00402d14((int *)piVar1[0x20]);
  FUN_00402d14((int *)piVar1[0x22]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


