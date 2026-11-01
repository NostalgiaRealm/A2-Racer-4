
/* ==== FUN_0047084c @ 0047084c ==== 
 * signature: undefined __register FUN_0047084c(int * param_1, char param_2)
 * body: 0047084c-0047089b
 */

void FUN_0047084c(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = FUN_00444864(param_1);
  if (piVar2 != (int *)0x0) {
    if (param_2 == '\0') {
      if (param_1 == (int *)piVar2[0x99]) {
        piVar2[0x99] = 0;
      }
    }
    else {
      piVar1 = (int *)piVar2[0x99];
      if ((piVar1 != (int *)0x0) && (param_1 != piVar1)) {
        FUN_0042f720((int)piVar1,0xb02a,0,0);
      }
      piVar2[0x99] = (int)param_1;
    }
  }
  return;
}


