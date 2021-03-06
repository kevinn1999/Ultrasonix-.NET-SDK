#pragma once

namespace Ultrasonix
{
	namespace Porta
	{
		public enum class ImagingMode
		{
			UnknownMode = -1,
			StartMode = 0,

			BMode = 0,
			MMode = 1,
			ColourMode = 2,
			PwMode = 3,
			TriplexMode = 4,
			PanoMode = 5,
			DualMode = 6,
			QuadMode = 7,
			CompoundMode = 8,
			DualColourMode = 9,
			DualCompoundMode = 10,
			CwMode = 11,
			RfMode = 12,
			ColorSplitMode = 13,
			F4DMode = 14,
			TriplexCwMode = 15,
			ColourMMode = 16,
			ElastoMode = 17,
			SDUVMode = 18,
			AnatomicalMMode = 19,
			ElastoComparativeMode = 20,
			FusionMode = 21,
			VecDopMode = 22,
			BiplaneMode = 23,
			ClinicalRfMode = 24,
			RfCompoundMode = 25,
			SHINEMode = 26,
			ColourRfMode = 27,
			FibroMode = 28,
			SURFMode = 29,

			EndMode
		};
	}
}