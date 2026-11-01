
/* ==== FUN_00440e44 @ 00440e44 ==== 
 * signature: undefined __register FUN_00440e44(int * param_1, int * param_2)
 * body: 00440e44-00440e6d
 */

void FUN_00440e44(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    iVar1 = FUN_0040312c(param_2,(int)&PTR_TControl_vmt_000_0042a694);
    TMainMenu_set_BiDiMode(param_1,*(char *)(iVar1 + 0x4f));
    *(undefined1 *)((int)param_1 + 0x35) = 1;
  }
  return;
}


