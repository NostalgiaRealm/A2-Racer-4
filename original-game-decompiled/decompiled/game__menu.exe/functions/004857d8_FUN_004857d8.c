
/* ==== FUN_004857d8 @ 004857d8 ==== 
 * signature: undefined __register FUN_004857d8(int param_1)
 * body: 004857d8-004857f5
 */

void FUN_004857d8(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 500) == 0) || (*(char *)(param_1 + 0x1f8) == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  FUN_00485780(param_1,cVar1);
  return;
}


