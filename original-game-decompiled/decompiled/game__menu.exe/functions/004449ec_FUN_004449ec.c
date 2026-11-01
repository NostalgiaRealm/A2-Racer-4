
/* ==== FUN_004449ec @ 004449ec ==== 
 * signature: undefined __register FUN_004449ec(int param_1)
 * body: 004449ec-00444a22
 */

void FUN_004449ec(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = FUN_00444ba4(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_0042ed8c(*(int *)(param_1 + 4));
      if ((char)uVar1 == '\0') {
        TControlScrollBar_set_Position(param_1,0);
      }
      else {
        TControlScrollBar_set_Position(param_1,*(int *)(param_1 + 0x10));
      }
    }
  }
  return;
}


