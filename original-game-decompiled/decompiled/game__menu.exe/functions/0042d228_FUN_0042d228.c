
/* ==== FUN_0042d228 @ 0042d228 ==== 
 * signature: undefined __register FUN_0042d228(HDC param_1, int param_2, int param_3)
 * body: 0042d228-0042d256
 */

void FUN_0042d228(HDC param_1,int param_2,int param_3)

{
  tagPOINT local_14;
  
  GetWindowOrgEx(param_1,&local_14);
  SetWindowOrgEx(param_1,local_14.x - param_2,local_14.y - param_3,(LPPOINT)0x0);
  return;
}


