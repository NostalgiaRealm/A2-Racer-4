
/* ==== flsall @ 0040469a ==== 
 * signature: int __cdecl flsall(int param_1)
 * body: 0040469a-00404706
 * note: Library Function - Single Match  _flsall  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar5 = 0;
  if (0 < DAT_00409340) {
    do {
      piVar1 = *(int **)(DAT_00408328 + iVar4 * 4);
      if ((piVar1 != (int *)0x0) && ((piVar1[3] & 0x83U) != 0)) {
        if (param_1 == 1) {
          iVar2 = FUN_004045fa(piVar1);
          if (iVar2 != -1) {
            iVar3 = iVar3 + 1;
          }
        }
        else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
          iVar2 = FUN_004045fa(piVar1);
          if (iVar2 == -1) {
            iVar5 = -1;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00409340);
  }
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}


