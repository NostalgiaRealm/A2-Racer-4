
/* ==== TPageControl.set_RaggedRight @ 00484d3c ==== 
 * signature: undefined TPageControl.set_RaggedRight(void)
 * body: 00484d3c-00484d56
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_RaggedRight(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x203)) {
    *(char *)((int)param_1 + 0x203) = param_2;
    FUN_00484140(param_1,0x800,param_2);
  }
  return;
}


