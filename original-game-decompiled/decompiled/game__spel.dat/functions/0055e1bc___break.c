
/* ==== __break @ 0055e1bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055e1bc-0055e1bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


