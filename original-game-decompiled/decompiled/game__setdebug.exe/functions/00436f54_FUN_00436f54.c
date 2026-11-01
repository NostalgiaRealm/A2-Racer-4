
/* ==== FUN_00436f54 @ 00436f54 ==== 
 * signature: undefined __register FUN_00436f54(int * param_1)
 * body: 00436f54-00436f9a
 */

void FUN_00436f54(int *param_1)

{
  HANDLE pvVar1;
  
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)((int)param_1 + 0x35) != '\0')) {
    pvVar1 = FUN_0043214c((POINT *)(param_1 + 0x12));
    if (pvVar1 == (HANDLE)0x0) {
      TMainMenu_set_BiDiMode(param_1,*(char *)(*(int *)PTR_DAT_00446c80 + 0x28));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
    else {
      TMainMenu_set_BiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


