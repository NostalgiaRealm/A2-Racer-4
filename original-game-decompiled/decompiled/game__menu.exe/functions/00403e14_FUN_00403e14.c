
/* ==== FUN_00403e14 @ 00403e14 ==== 
 * signature: undefined __register FUN_00403e14(int * param_1, char * param_2)
 * body: 00403e14-00403e3f
 */

void FUN_00403e14(int *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = param_2;
  if (param_2 != (char *)0x0) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 4) {
      if (pcVar2[1] == '\0') {
LAB_00403e35:
        pcVar2 = pcVar2 + 1;
        break;
      }
      if (pcVar2[2] == '\0') {
LAB_00403e34:
        pcVar2 = pcVar2 + 1;
        goto LAB_00403e35;
      }
      if (pcVar2[3] == '\0') {
        pcVar2 = pcVar2 + 1;
        goto LAB_00403e34;
      }
    }
    uVar1 = (int)pcVar2 - (int)param_2;
  }
  FUN_00403d44(param_1,(undefined4 *)param_2,uVar1);
  return;
}


