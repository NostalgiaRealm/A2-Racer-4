
/* ==== FUN_0043affc @ 0043affc ==== 
 * signature: undefined __register FUN_0043affc(int param_1, int param_2, int param_3)
 * body: 0043affc-0043b09f
 */

void FUN_0043affc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1f0) + 0x1e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 500) + 0x1e) = 1;
    }
    TControlScrollBar_set_Position(*(int *)(param_1 + 0x1f0),0);
    TControlScrollBar_set_Position(*(int *)(param_1 + 500),0);
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      iVar1 = *(int *)(param_1 + 0x1f0);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        TControlScrollBar_set_Range(iVar1,iVar2);
      }
      iVar1 = *(int *)(param_1 + 500);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        TControlScrollBar_set_Range(iVar1,iVar2);
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1f0) + 0x1e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 500) + 0x1e) = 0;
  return;
}


