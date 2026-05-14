import Loom.Test.AddSubCancel
import Loom.Test.AddSubCancelDeep
import Loom.Test.AssertGadgetStep
import Loom.Test.ConcreteEPostTwoPreds
import Loom.Test.ConcretePostEPost
import Loom.Test.DiteSplit
import Loom.Test.GetThrowSet
import Loom.Test.MatchSplit
import Loom.Test.MatchSplitTest

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

open Lean Parser Meta Elab Tactic Sym Loom Std.Internal.Do

#eval AddSubCancel.runTests [10]
#eval AddSubCancelDeep.runTests [10]
#eval AssertGadgetStep.runTests [10]
#eval ConcreteEPostTwoPreds.runTests [10]
#eval ConcretePostEPost.runTests [10]
#eval DiteSplit.runTests [10]
#eval GetThrowSet.runTests [10]
#eval MatchSplit.runTests [10]
#eval MatchSplitTest.runTests [10]
