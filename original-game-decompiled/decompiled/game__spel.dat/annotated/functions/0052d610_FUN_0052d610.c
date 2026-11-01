
/* ==== FUN_0052d610 @ 0052d610 ==== 
 * signature: int __cdecl FUN_0052d610(int * param_1, int * param_2)
 * body: 0052d610-0052d636
 */

int __cdecl FUN_0052d610(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_1 + 0x48);
  if (iVar1 == 0) {
    iVar1 = -*(int *)(*param_1 + 0x4c);
  }
  iVar2 = *(int *)(*param_2 + 0x48);
  if (iVar2 == 0) {
    iVar2 = -*(int *)(*param_2 + 0x4c);
  }
  return iVar1 - iVar2;
}


