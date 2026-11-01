
/* ==== FUN_0042d7c1 @ 0042d7c1 ==== 
 * signature: undefined4 __cdecl FUN_0042d7c1(int param_1)
 * body: 0042d7c1-0042d810;0042d814-0042d81c
 */

undefined4 __cdecl FUN_0042d7c1(int param_1)

{
  int iVar1;
  
  if (param_1 == DAT_006fba58) {
    return DAT_006c30b0;
  }
  iVar1 = FUN_004134e0(param_1);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Request_for_wheels_on_gr_00597164);
  }
  return *(undefined4 *)(&DAT_006c3098 + iVar1 * 4);
}


