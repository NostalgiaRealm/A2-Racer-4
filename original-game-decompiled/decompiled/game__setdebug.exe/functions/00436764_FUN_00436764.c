
/* ==== FUN_00436764 @ 00436764 ==== 
 * signature: undefined __register FUN_00436764(int * param_1, int * param_2)
 * body: 00436764-0043678d
 */

void FUN_00436764(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    iVar1 = FUN_00402ea4(param_2,(int)&PTR_TControl_vmt_000_00420b14);
    TMainMenu_set_BiDiMode(param_1,*(char *)(iVar1 + 0x4f));
    *(undefined1 *)((int)param_1 + 0x35) = 1;
  }
  return;
}


