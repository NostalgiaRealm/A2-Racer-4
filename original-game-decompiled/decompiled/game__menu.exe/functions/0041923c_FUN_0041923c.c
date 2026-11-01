
/* ==== FUN_0041923c @ 0041923c ==== 
 * signature: undefined4 __register FUN_0041923c(int * param_1)
 * body: 0041923c-00419267
 */

undefined4 FUN_0041923c(int *param_1)

{
  HDC hdc;
  undefined4 uVar1;
  tagPOINT *lppoint;
  tagPOINT local_10;
  
  lppoint = &local_10;
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0x15) & 0x80) != 0) {
    hdc = (HDC)FUN_004194d8(param_1);
    GetWindowOrgEx(hdc,lppoint);
    if (local_10.x != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


