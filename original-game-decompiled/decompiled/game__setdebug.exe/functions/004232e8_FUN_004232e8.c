
/* ==== FUN_004232e8 @ 004232e8 ==== 
 * signature: undefined __register FUN_004232e8(HDC param_1, int param_2, int param_3)
 * body: 004232e8-00423316
 */

void FUN_004232e8(HDC param_1,int param_2,int param_3)

{
  tagPOINT local_14;
  
  GetWindowOrgEx(param_1,&local_14);
  SetWindowOrgEx(param_1,local_14.x - param_2,local_14.y - param_3,(LPPOINT)0x0);
  return;
}


