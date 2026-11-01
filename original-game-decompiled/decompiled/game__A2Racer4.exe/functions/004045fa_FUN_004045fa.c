
/* ==== FUN_004045fa @ 004045fa ==== 
 * signature: int __cdecl FUN_004045fa(int * param_1)
 * body: 004045fa-00404634
 */

int __cdecl FUN_004045fa(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_00404635(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_00404ebe(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


