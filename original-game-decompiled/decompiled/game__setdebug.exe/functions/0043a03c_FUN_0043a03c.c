
/* ==== FUN_0043a03c @ 0043a03c ==== 
 * signature: undefined __register FUN_0043a03c(int param_1)
 * body: 0043a03c-0043a072
 */

void FUN_0043a03c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = FUN_0043a1f4(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_00424dec(*(int *)(param_1 + 4));
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


