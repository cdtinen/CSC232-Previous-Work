/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file   XyzLanguageProcessor.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  XyzLanguageProcessor specification.
 */

#ifndef CSC232_HW04_LANGUAGE_RECOGNITION_XYZ_LANGUAGE_PROCESSOR_H
#define CSC232_HW04_LANGUAGE_RECOGNITION_XYZ_LANGUAGE_PROCESSOR_H

#include "LanguageProcessor.h"

namespace csc232 {
    class XyzLanguageProcessor : public LanguageProcessor {
    public:
        virtual bool isValid(const std::string &word) const override;
    };
}


#endif // CSC232_HW04_LANGUAGE_RECOGNITION_XYZ_LANGUAGE_PROCESSOR_H
