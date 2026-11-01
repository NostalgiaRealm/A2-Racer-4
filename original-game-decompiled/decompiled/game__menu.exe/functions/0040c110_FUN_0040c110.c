
/* ==== FUN_0040c110 @ 0040c110 ==== 
 * signature: int __register FUN_0040c110(undefined * param_1, int * param_2)
 * body: 0040c110-0040c19b
 */

int FUN_0040c110(undefined *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_004ac5bc == '\0') {
    iVar4 = FUN_00408330(param_1,param_2);
  }
  else {
    uVar3 = FUN_00403edc((int)param_1);
    iVar4 = FUN_00404210(param_2,uVar3);
    iVar5 = 1;
    if (0 < (int)uVar3) {
      do {
        iVar4 = FUN_004040ac(param_2);
        *(undefined *)(iVar4 + -1 + iVar5) = param_1[iVar5 + -1];
        if (((byte)(&DAT_004aa118)[(int)(uint)(byte)param_1[iVar5 + -1] >> 3] >>
             ((byte)param_1[iVar5 + -1] & 7) & 1) == 0) {
          cVar2 = *(char *)(*param_2 + -1 + iVar5);
          iVar4 = CONCAT31((int3)((uint)*param_2 >> 8),cVar2 + -0x5b);
          if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            iVar4 = FUN_004040ac(param_2);
            pcVar1 = (char *)(iVar4 + -1 + iVar5);
            *pcVar1 = *pcVar1 + ' ';
          }
        }
        else {
          iVar4 = FUN_004040ac(param_2);
          *(undefined *)(iVar4 + -1 + iVar5 + 1) = param_1[iVar5];
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= (int)uVar3);
    }
  }
  return iVar4;
}


