
/* ==== FUN_00408950 @ 00408950 ==== 
 * signature: int __register FUN_00408950(undefined * param_1, undefined * param_2)
 * body: 00408950-0040899c
 */

int FUN_00408950(undefined *param_1,undefined *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00403edc((int)param_2);
  pcVar2 = FUN_004040a0(param_1);
  do {
    if (iVar1 < 1) {
      return iVar1;
    }
    if ((param_2[iVar1 + -1] != '\0') &&
       (pcVar3 = FUN_00408c98(pcVar2,param_2[iVar1 + -1]), pcVar3 != (char *)0x0)) {
      uVar4 = FUN_0040beec(param_2,iVar1);
      if ((char)uVar4 != '\x02') {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    }
    iVar1 = iVar1 + -1;
  } while( true );
}


